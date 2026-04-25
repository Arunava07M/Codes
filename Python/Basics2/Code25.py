# The original tuple
numbers = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)

# Create a tuple of even numbers
evens = tuple(x for x in numbers if x % 2 == 0)

# Create a tuple of odd numbers
odds = tuple(x for x in numbers if x % 2 != 0)

print(f"Evens: {evens}")
print(f"Odds: {odds}")