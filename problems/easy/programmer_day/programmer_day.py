
def dayOfProgrammer(year):
   if year == 1918:
        # Transition year: February 14 was the 32nd day
        return f"26.09.{year}"
    elif (1700 <= year <= 1917 and year % 4 == 0) or \
         (year >= 1919 and ((year % 400 == 0) or (year % 4 == 0 and year % 100 != 0))):
        # Leap year (Julian or Gregorian)
        return f"12.09.{year}"
    else:
        # Non-leap year
        return f"13.09.{year}"
