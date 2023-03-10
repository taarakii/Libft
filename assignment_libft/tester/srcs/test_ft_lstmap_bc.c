/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susami <susami@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:33:52 by susami            #+#    #+#             */
/*   Updated: 2023/02/20 12:52:34 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

static void *str_toupper(void *p)
{
    char *str = strdup((char *)p);
    char *tmp = str;
    while (*tmp)
    {
        *tmp = toupper(*tmp);
        tmp++;
    }
    return (str);
}

static void *str_tolower(void *p)
{
    char *str = strdup((char *)p);
    char *tmp = str;
    while (*tmp)
    {
        *tmp = tolower(*tmp);
        tmp++;
    }
    return (str);
}

int	main(void)
{
/*
    t_list  *lst = ft_lstnew(strdup("Hello"));
    ft_lstadd_back(&lst, ft_lstnew(strdup(" World")));
    ft_lstadd_back(&lst, ft_lstnew(strdup(" 42")));
    ft_lstadd_back(&lst, ft_lstnew(strdup(" Tokyo!")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("")));
*/
//
    t_list  *lst = NULL;
    t_list  *elem1 = (t_list *)malloc(sizeof(t_list) + 1);
    t_list  *elem2 = (t_list *)malloc(sizeof(t_list) + 1);
    t_list  *elem3 = (t_list *)malloc(sizeof(t_list) + 1);
    t_list  *elem4 = (t_list *)malloc(sizeof(t_list) + 1);
    t_list  *elem5 = (t_list *)malloc(sizeof(t_list) + 1);

    if (elem1 == NULL)
	printf("\nelem1 null");
    if (elem2 == NULL)
	printf("\nelem2 null");
    if (elem3 == NULL)
	printf("\nelem3 null");
    if (elem4 == NULL)
	printf("\nelem4 null");
    if (elem5 == NULL)
	printf("\nelem5 null");

    lst = elem1;
    elem1->next = elem2;
    elem2->next = elem3;
    elem3->next = elem4;
    elem4->next = elem5;
    elem5->next = NULL;
    
    char    s1[] = "Hello";
    char    s2[] = " World";
    char    s3[] = " 42";
    char    s4[] = " Tokyo!";
    char    s5[] = "";

    elem1->content = s1;
    elem2->content = s2;
    elem3->content = s3;
    elem4->content = s4;
    elem5->content = s5;
//
    // toupper
    t_list *newlst = ft_lstmap(lst, str_toupper, free);
    /* 1 */ ASSERT_EQ_STR(newlst->content, "HELLO");
    /* 2 */ ASSERT_EQ_STR(newlst->next->content, " WORLD");
    /* 3 */ ASSERT_EQ_STR(newlst->next->next->content, " 42");
    /* 4 */ ASSERT_EQ_STR(newlst->next->next->next->content, " TOKYO!");
    /* 5 */ ASSERT_EQ_STR(newlst->next->next->next->next->content, "");
    /* 6 */ ASSERT_EQ_PTR(newlst->next->next->next->next->next, NULL);

    // tolower
    newlst = ft_lstmap(lst, str_tolower, free);
    /* 7 */ ASSERT_EQ_STR(newlst->content, "hello");
    /* 8 */ ASSERT_EQ_STR(newlst->next->content, " world");
    /* 9 */ ASSERT_EQ_STR(newlst->next->next->content, " 42");
    /* 10 */ ASSERT_EQ_STR(newlst->next->next->next->content, " tokyo!");
    /* 11 */ ASSERT_EQ_STR(newlst->next->next->next->next->content, "");
    /* 12 */ ASSERT_EQ_PTR(newlst->next->next->next->next->next, NULL);
}
