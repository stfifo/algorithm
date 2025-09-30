note = list(input().split())
if note == sorted(note):
        print("ascending")
elif note == sorted(note, reverse=True):
        print("descending")
else: print("mixed")