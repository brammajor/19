/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:39:07 by brmajor           #+#    #+#             */
/*   Updated: 2023/02/10 13:33:59 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main()
{
	printf("1--------- \n");
	printf("%i ", ft_printf("%c", 'A'));
	printf("%i ", printf("%c", 'A'));

	printf("\n");

	printf("2--------- \n");
	printf("%i ", ft_printf("%c", '\0'));
	printf("%i ", printf("%c", '\0'));

	printf("\n");

	printf("3--------- \n");
	printf("%i ", ft_printf("%s", "123abc"));
	printf("%i ", printf("%s", "123abc"));

	printf("\n");

	printf("4--------- \n");
	printf("%i ", ft_printf("%s", "123456789123456789123456789123456789123456789asdfghjklasdfghjklasdfghjklqwertyuioqwertyuiopqwertyuiop"));
	printf("%i ", printf("%s", "123456789123456789123456789123456789123456789asdfghjklasdfghjklasdfghjklqwertyuioqwertyuiopqwertyuiop"));

	printf("\n");

	printf("5--------- \n");
	printf("%i ", ft_printf("%s", '\0'));
	printf("%i ", printf("%s", '\0'));

	printf("\n");

	printf("6--------- \n");
	printf("%i ", ft_printf("%p", 42));
	printf("%i ", printf("%p", 42));

	printf("\n");

	printf("7--------- \n");
	printf("%i ", ft_printf("%p", '\0'));
	printf("%i ", printf("%p", '\0'));

	printf("\n");

	printf("8--------- \n");
	printf("%i ", ft_printf("%p", LONG_MAX));
	printf("%i ", printf("%p", LONG_MAX));

	printf("\n");

	printf("9--------- \n");
	printf("%i ", ft_printf("%p", -ULONG_MAX));
	printf("%i ", printf("%p", -ULONG_MAX));

	printf("\n");

	printf("10--------- \n");
	printf("%i ", ft_printf("%p", UINT_MAX));
	printf("%i ", printf("%p", UINT_MAX));

	printf("\n");

	printf("11--------- \n");
	printf("%i ", ft_printf("%d", 0));
	printf("%i ", printf("%d", 0));

	printf("\n");

	printf("12--------- \n");
	printf("%i ", ft_printf("%d", -42));
	printf("%i ", printf("%d", -42));

	printf("\n");

	printf("13--------- \n");
	printf("%i ", ft_printf("%d", "abc"));
	printf("%i ", printf("%d", "abc"));

	printf("\n");

	printf("14--------- \n");
	printf("%i ", ft_printf("%d", INT_MIN));
	printf("%i ", printf("%d", INT_MIN));

	printf("\n");

	printf("15--------- \n");
	printf("%i ", ft_printf("%i", INT_MIN));
	printf("%i ", printf("%i", INT_MIN));

	printf("\n");

	printf("16--------- \n");
	printf("%i ", ft_printf("%i", LLONG_MAX));
	printf("%i ", printf("%i", LLONG_MAX));

	printf("\n");

	printf("17--------- \n");
	printf("%i ", ft_printf("%i", '\0'));
	printf("%i ", printf("%i", '\0'));

	printf("\n");

	printf("18--------- \n");
	printf("%i ", ft_printf("%u", -25));
	printf("%i ", printf("%u", -25));

	printf("\n");

	printf("19--------- \n");
	printf("%i ", ft_printf("%u", '\0'));
	printf("%i ", printf("%u", '\0'));

	printf("\n");

	printf("20--------- \n");
	printf("%i ", ft_printf("%u", INT_MIN));
	printf("%i ", printf("%u", INT_MIN));

	printf("\n");

	printf("21--------- \n");
	printf("%i ", ft_printf("%u", UINT_MAX));
	printf("%i ", printf("%u", UINT_MAX));

	printf("\n");

	printf("22--------- \n");
	printf("%i ", ft_printf("%x", '\0'));
	printf("%i ", printf("%x", '\0'));

	printf("\n");

	printf("23--------- \n");
	printf("%i ", ft_printf("%x", 424242));
	printf("%i ", printf("%x", 424242));

	printf("\n");

	printf("24--------- \n");
	printf("%i ", ft_printf("%x", LONG_MAX));
	printf("%i ", printf("%x", LONG_MAX));

	printf("\n");

	printf("25--------- \n");
	printf("%i ", ft_printf("%X", ULONG_MAX));
	printf("%i ", printf("%X", ULONG_MAX));

	printf("\n");

	printf("26--------- \n");
	printf("%i ", ft_printf("%%"));
	printf("%i ", printf("%%"));

	printf("\n");

	printf("27--------- \n");
	printf("%i ", ft_printf("%\n"));
	printf("%i ", printf("%\n"));

	printf("\n");

	printf("28--------- \n");
	printf("%i ", ft_printf("%l"));
	printf("%i ", printf("%l"));

	printf("\n");

	printf("29--------- \n");
	printf("%i ", ft_printf("%%%%%%%%%qcajgjiddidwnwdnciefiirietotffetitomxnbaqiqflgemvnxytyw 1112aaaaafk ff\n\n\n\nereee"));
	printf("%i ", printf("%%%%%%%%%qcajgjiddidwnwdnciefiirietotffetitomxnbaqiqflgemvnxytyw 1112aaaaafk ff\n\n\n\nereee"));

	printf("\n");

	printf("30--------- \n");
	printf("%i ", ft_printf("%'\0'"));
        printf("%i ", printf("%'\0'"));
}
