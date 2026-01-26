def happy_birth_day(name,age):
    print(f"Happy birth day {name}.\nNow you are {age} years old.")
happy_birth_day("Shanvi",-10) # future kid not a bug
def student_info(student_name,student_session,student_roll,student_section,due_fees,student_class,total_fees,current_fees):
    print(f"""
Name : {student_name}
Session : {student_session}
Section : {student_section}
Roll No : {student_roll}
Class : {student_class}
Due amount : ₹ {due_fees} /- 
Total session fees : ₹ {total_fees} /- 
current class fees : ₹ {current_fees} /- 
          """)
student_info("Shanvi Jana","2036  - 2050", 1,"A1","00.00","LKG B",2200000,250000)
#print(2036+14)