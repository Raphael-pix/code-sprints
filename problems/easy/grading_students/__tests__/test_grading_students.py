import sys
import os

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

from grading_students import gradingStudents

def test_grading_students():
    grades = [73, 67, 38, 33]
    result = gradingStudents(grades)
    assert result == [75, 67, 40, 33], f"Expected [75, 67, 40, 33], got {result}"
    print("✅ Python test passed!")

if __name__ == "__main__":
    test_grading_students()
