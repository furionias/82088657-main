import time


class Course:
    def __init__(
        self,
        courses,
        students_enrolled,
        max_students,
        students_and_course,
        course_limit,
    ):
        self.courses = courses
        self.students_enrolled = students_enrolled
        self.max_students = max_students
        self.students_and_course = students_and_course
        self.course_limit = course_limit

    def get_courses(self):
        print(self.courses)


x = Course(
    courses={},
    students_enrolled={},
    students_and_course={},
    max_students=89,
    course_limit=7,
)


class Student(Course):
    def __init__(
        self,
        name,
        age,
        students,
        courses,
        students_enrolled,
        max_students,
        students_and_course,
        course_limit,
    ):
        self.name = name
        self.age = age
        self.students = students
        super().__init__(
            courses, students_enrolled, max_students, students_and_course, course_limit
        )

    def get_students(self):  # gets students and returns them back to the output
        import time

        print("getting Students")
        time.sleep(5)

        for i in self.students:
            print(self.students[i])
            if len(self.students < 0):
                return False

    def get_courses(self, course_identifier):
        print("Getting courses")
        time.sleep(5)
        course_identifier.get_courses()
        if self.courses == 0:
            self.courses.append("Science")

    def add_courses(self):
        course_input = input("Enter what course to add:")
        self.courses.append(course_input)

    def add_student(self):
        while len(self.students) < self.max_students:
            student_input = input("Enter student input:")
            self.students.append(student_input)


            if student_input == "no":
                break
            else:
                return self.students

    def add_student_to_course(self):  # method adds student to a course
        while len(self.students) < int(self.course_limit):
            student1 = input("Enter student:")
            course_selec = input("What course do you want to add them to:")
            self.students_and_course.append({student1, course_selec})

            if student1 == "no":
                break
            self.students_enrolled.append(student1)
            return self.students_and_course


y = Student(
    name="Asriel",
    age=14,
    students={},
    courses={},
    students_enrolled=[],
    students_and_course=[],
    max_students=89,
    course_limit=7,
)
print(
    y.get_courses(
        course_identifier=Course(
            courses={},
            students_enrolled={},
            students_and_course={},
            max_students=89,
            course_limit=7,
        )
    )
)  # duck typing

print(y.add_student_to_course())


