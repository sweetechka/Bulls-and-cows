[![Build Status](https://travis-ci.org/sweetechka/Bulls-and-cows.svg?branch=master)](https://travis-ci.org/github/sweetechka/Bulls-and-cows)
   ### Курсовой проект по предмету "Технологии разработки программного обеспечения" 
---

**Тема проекта**: Игра "Быки и Коровы".  
**Выполнили**: студенты 1 курса СибГУТИ факультета ИВТ гр. ИП-912  
**Камынин Никита** и **Титов Виктор**  

# Описание 
Данный проект представляет собой игру "Быки и Коровы" с использованием графического интерфейса Windows Forms. Управление программой производится при помощи мышки (нажатий на соответствующие кнопки в окне игры) и клавиатуры (ввод чисел в окно ввода). В игре предусмотрено два режима (игра с компьютером и против другого игрока).

Также эта игра хорошо развивает такие навыки как:
* Логика
* Мышление
* Память



# Установка 
Данная игра не требует установки, вы просто скачиваете данный репозиторий и запускаете .exe файл в папке release.
(Примечание: возможен запуск только на ОС Winwows)

$git clone https://github.com/sweetechka/Bulls-and-cows.git


# Как играть 
После запуска игры вас встречает меню, в котором вы можете выбрать режим(игра против компьютера или игра друг против друга). Суть игры состоит в том, чтобы угадать число задуманное либо компьютером, либо вашим противником. Чтобы начать игру выберите режим(галочка) и нажать "Начали". Ввод цифр осуществляется при помощи клавиатуры в специальном окне ввода. 

## 1) Общие правила

Загаданные четырехзначные числа не должны включать в себя повторяющиеся цифры. Также загаданное четырехзначное число не должно начинаться с 0(т.к программа воспринимает такие данные, как трехзначные числа, что противоречит логике данной игры).

## 2) Игра с компьютером

Если вы выбрали этот режим, компьютер задумывает случайное число. Затем, вы совершаете попытку угадать загаданное компьютером число и в ответ получаете количество правильных цифр стоящих на своих местах(быки) и количество правильных цифр стоящих не на своих местах(коровы). Игра длится до ввода вами загаданного числа.

## 3) Игра друг против друга

Если вы выбрали этот режим, то вы поочередно задумываете друг другу свои числа и затем, так же как при игре против компьютера, совершаете поочередные попытки угадывания чисел. Побеждает тот, кто угадает число первым.



# Контакты
gadyka54@gmail.com (Лидер)

titvs1337@mail.ru (Главный программист)
