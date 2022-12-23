import re
from fastapi import FastAPI

app = FastAPI()

@app.get("/example")
def example():
    return "Hello World"

@app.post("/users/{userid}/info")
def example2(userid: int):
    return "Hello World 2!" + str(userid)

@app.delete("/users/{acb}/info")
def example3(useridL int):
    return
    