
current_score = 0

def add_points(points):
    global current_score
    current_score += points


def preview_bonus(points):

    potential_score = current_score + (points * 2)
    return potential_score


# 1. Initial State
print(f"Start Score: {current_score}")

# 2. Update Global Score
add_points(50)
print(f"Score after Level 1: {current_score}")

# 3. Preview Bonus (Local calculation only)
preview = preview_bonus(10)
print(f"Preview with bonus: {preview}")

# 4. Verify Global Scope
print(f"Score after preview: {current_score}")  
