
def modify_score(score_val):
    score_val = 100
    print(f"Inside modify_score: {score_val}")


def modify_record(grade_list):
    grade_list.append(100)
    print(f"Inside modify_record: {grade_list}")



current_score = 50
grade_record = [50, 60, 70]


print("--- Calling Functions ---")
modify_score(current_score)
modify_record(grade_record)


print("\n--- Results Outside Functions ---")
print(f"Final Score Variable: {current_score}")  # Beklenen: 50 (global değişken değişmemeli)
print(f"Final Grade Record: {grade_record}")  # Beklenen: [50, 60, 70, 100] (global liste değişti)
