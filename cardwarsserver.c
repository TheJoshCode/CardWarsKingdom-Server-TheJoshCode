#include <stdio.h>
#include <stdlib.h>

int run_step(const char *description, const char *command) {
    int result;

    result = system(command);

    if (result != 0) {
        fprintf(stderr, "\nERROR: Step failed (%d): %s\n", result, description);
        return 0;
    }

    printf("SUCCESS: %s\n", description);
    return 1;
}

int main(void) {
    /*if no python found, installs it*/
    if (!run_step(
        "CHECKING FOR PYTHON INSTALLATION",
        "python --version || (echo Python not found. Installing... && winget install Python)"
    )) return 1;
    if (!run_step(
        "PLAYING IN A NEW SANDBOX",
        "python -m venv cwk-venv"
    )) return 1;

    if (!run_step(
        "DIS MAKES IT FASTER",
        "cmd /C \"cwk-venv\\Scripts\\activate && pip install uv\""
    )) return 1;

    if (!run_step(
        "PUTTING ALL DA REQUIREMENTS IN",
        "cmd /C \"cwk-venv\\Scripts\\activate && uv pip install -r requirements.txt\""
    )) return 1;

    if (!run_step(
        "DA SERVER IS STARTING NOW",
        "cmd /C \"cwk-venv\\Scripts\\activate && cls && python app.py\""
    )) return 1;

    return 0;
}
