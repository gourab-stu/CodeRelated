marks = int(input("Enter your marks out of 100: "))

if marks >= 25:
    if marks >= 40:
        if marks >= 50:
            if marks >= 60:
                if marks >= 70:
                    if marks >= 80:
                        if marks >= 90:
                            if marks > 100:
                                print("Marks should be <= 100")
                            else:
                                print("Your grade is A+")
                        else:
                            print("Your grade is A")
                    else:
                        print("Your grade is B+")
                else:
                    print("Your grade is B")
            else:
                print("Your grade is C+")
        else:
            print("Your grade is C")
    else:
        print("Your grade is D")
else:
    print("Your grade is F, you have not passed")
