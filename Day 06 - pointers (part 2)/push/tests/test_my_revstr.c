/*
** EPITECH PROJECT, 2022
** test_my_revstr
** File description:
** test_my_revstr
*/

#include <criterion/criterion.h> 

Test (my_revstr, copy_five_characters_in_empty_array)
{
	char str[] = "hello";
	my_revstr(str);
	cr_assert_str_eq(str, "olleh");	
}