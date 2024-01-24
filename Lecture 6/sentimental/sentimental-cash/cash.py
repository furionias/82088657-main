# TODO


def cash():
    while True:
        owed_change = float(input("Change Owed: "))
        if owed_change >= 0:
            break

    changed_owed_cents = round(owed_change * 100)
    num_coins = 0
    while changed_owed_cents  > 0:
        if changed_owed_cents >=25:
            changed_owed_cents -= 25
            num_coins += 1

        elif changed_owed_cents >= 10:
            changed_owed_cents -= 10
            num_coins += 1

        elif changed_owed_cents >= 5:
            changed_owed_cents  -= 5
            num_coins  += 1

        else:
            changed_owed_cents -= 1
            num_coins += 1

    print(num_coins)


cash()



