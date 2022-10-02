#include <iostream>
#include <string>
#include <map>
// Программа рекомендующая фильм, звезду и песню при регистрации
using namespace std;
// Функция получения номера фильма
int getMovie(string s) {
    return int(s[0]);
}
// Функция получения номера звезды
int getVip(string s) {
    return int(s[0]);
}
// Функция нахождения суммы цифр числа
int sum(int x) {
    int y = 0;
    while (x) {
        y += x % 10;
        x /= 10;
    }
    return y;
}
// Фунция получения номера песни
int getMusic(int a, int b, int c) {
    int num = sum(a) + sum(b) + sum(c);
    if (sum(num) >= 10) return sum(sum(num));
    else return sum(num);
}
// Объявление структуры пользователя
struct person {
    int day = 0, month = 0, year = 0;
    string name, surname;
};
// Тело функции
int main() {
  person human;
  string s, d;
    int c = 0;
  bool f = false;
    // Считывание имени и фамилии
  cout << "Hey, we have some fun content for you. Enter yor name and surname" << endl;
  cin >> s;
  for (char i: s)
    if (i != ' ') {
      if (!f) human.name += i;
      else human.surname += i;
    } else f = true;
  // Считывание даты рождения
  cout << "Date of birth in the format dd.mm.yyyy" << endl;
  cin >> d;
    for (char i: d)
      if (i != '.') {
        if (c == 0) human.day = human.day * 10 + int(i) - 48;
        else if (c == 1) human.month = human.month * 10 + int(i) - 48;
        else human.year = human.year * 10 + int(i) - 48;
      } else c++;
    // Создание таблицы фильмов
    map <int, string> movie;
    movie[0] = "The Intouchables";
    movie[1] = "The wolf of Wall Street";
    movie[2] = "Blade Runner 2048";
    movie[3] = "Fight club";
    movie[4] = "Forrest Gump";
    movie[5] = "The Prestige";
    movie[6] = "Omoi, Omoware, Furi, Furare";
    movie[7] = "Lock, Stock and Two Smoking Barrels";
    movie[8] = "Joker";
    movie[9] = "Snatch";
    movie[10] = "Kimi no na wa";
    movie[11] = "The Godfather";
    movie[12] = "After";
    movie[13] = "Taxi driver";
    movie[14] = "The Green Mile";
    movie[15] = "Lord of the Rings";
    movie[16] = "Star Wars";
    movie[17] = "Harry Potter";
    movie[18] = "The Shawshank Redemption";
    movie[19] = "Fantastic Beasts";
    movie[20] = "Drive";
    movie[21] = "Kimi no Suizou wo Tabetai";
    movie[22] = "Kotonoha no Niwa";
    movie[23] = "Kill Bill";
    movie[24] = "Once Upon a Time in America";
    movie[25] = "Blade Runner 2048";
    // Создание таблицы звезд
    map <int, string> vip;
    vip[0] = "Robert Downey, Jr.";
    vip[1] = "Tom Cruise";
    vip[2] = "Tom Hanks";
    vip[3] = "James Franco";
    vip[4] = "Johnny Depp";
    vip[5] = "Emma Watson";
    vip[6] = "Will Smith";
    vip[7] = "Elizabeth Olsen";
    vip[8] = "Daniel Radcliffe";
    vip[9] = "Benedict Cumberbatch";
    vip[10] = "Harrison Ford";
    vip[11] = "Leonardo DiCaprio";
    vip[12] = "Tom Hiddleston";
    vip[13] = "Paul Bettany";
    vip[14] = "Brad Pitt";
    vip[15] = "Hugh Jackman";
    vip[16] = "Ian McKellen";
    vip[17] = "Gwyneth Paltrow";
    vip[18] = "Jennifer Lawrence";
    vip[19] = "Natalie Portman";
    vip[20] = "Christian Bale";
    vip[21] = "Robert De Niro";
    vip[22] = "Keanu Reeves";
    vip[23] = "Robert Pattinson";
    vip[24] = "Jude Law";
    vip[25] = "Russell Crowe";
    // Создание таблицы песен
    map <int, string> music;
    music[0] = "B.o.B, Jessie J - Price Tag";
    music[1] = "Grimes - Kill V. Maim";
    music[2] = "Bag Riders - Shooting Stars";
    music[3] = "Sia, Sean Paul - Cheap Thrills";
    music[4] = "Carly Rae Jepsen - Call Me Maybe";
    music[5] = "the peggies - Baby!";
    music[6] = "Twenty One Pilots - Ride";
    music[7] = "Bastille - Pompeii";
    music[8] = "Brick + Mortar - Locked in a Cage";
    music[9] = "Falling In Reverse - The Drug Nn Me Is You";
    // Итоговый вывод рекоммендаций
    if (human.day <= 31 && human.month <= 12 && human.year < 1900 && human.year > 2022)
      cout << "Super! Your movie for today is " << movie[getMovie(human.name) - 65] << ", star"
                                                                                       " " << vip[getVip(human.surname) - 65] << ". Musical composition for "
                                                                                                                           "you: " << music[getMusic(human.day, human.month, human.year)] << endl;
  else cout << "You entered the wrong date of birth" << endl;
  return 0;
}