import os
from fpdf import FPDF


def get_c_files(directory):
    c_files = []
    for file in os.listdir(directory):
        if file.endswith(".c"):
            c_files.append(os.path.join(directory, file))
    return c_files


def create_pdf(file_path, code_files):
    pdf = FPDF()
    pdf.set_font("Arial", size=10)

    for code_file in code_files:
        base_name = os.path.splitext(code_file)[0]  # Get the base name without extension
        image_file = f"./outputs/{base_name}.png"  # Construct the corresponding PNG file name

        with open(code_file, "r") as f:
            code_contents = f.read()

        # Add the code file name (in bold) to the PDF
        pdf.add_page()
        pdf.set_font("Arial", size=10, style="B")  # Set bold font style
        pdf.cell(0, 10, f"File: {code_file}", ln=True)
        pdf.set_font("Arial", size=10)  # Reset font style

        # Add the code file contents to the PDF
        pdf.multi_cell(0, 5, code_contents)

        # Add the image to the PDF
        if os.path.exists(image_file):
            pdf.image(image_file, x=5, y=pdf.get_y() + 5, w=0, h=60)  # Adjust the image dimensions as needed

    # Save the PDF
    pdf.output(file_path)


# Example usage
directory_path = "./"

code_files = get_c_files(directory_path)
create_pdf("code_output.pdf", code_files)
