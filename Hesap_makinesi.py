sayi_1 = int(input("birinci sayi girin: "))
sayi_2 = int(input("ikinci sayiyi girin: "))

islem = str(input("yapmak itediginiz islemi secin: "))

toplama = sayi_1 + sayi_2
cıkartma = sayi_1 - sayi_2
carpma = sayi_1 * sayi_2
bolme = sayi_1 / sayi_2

if islem == "toplama":
    print (toplama)
elif islem == "cıkartma":
    print(cıkartma)
elif islem == "carpma":
    print(carpma)
elif islem == "bolme":
    print(bolme)