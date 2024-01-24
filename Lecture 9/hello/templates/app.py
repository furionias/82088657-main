from flask import Flask, render_template, request

app = Flask(__name__)


@app.route("/")
def index():
   if request.method == "GET":
     return render_template("index.html")
   elif request.method == "POST":
      return render_template("greet.html")


@app.route("/greet", methods=["GET", "POST"])
def greet():
   return render_template("greet.html", name=request.form.get("name", "world"))
