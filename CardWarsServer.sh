python -m venv cwk-venv
source cwk-venv/bin/activate
pip install uv
uv pip install -r requirements.txt
python app.py
deactivate