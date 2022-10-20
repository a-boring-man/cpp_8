/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:34:06 by jrinna            #+#    #+#             */
/*   Updated: 2022/10/19 09:57:23 by jrinna           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_change_env_by_copy(char *env)
{
	printf("valeur du pointer env dans ft_change_env_by_copy avant changement : %p\t valeur de *env dans ft_change_env_by_copy avant changement : %s", env, env);
	env = strdup("changement de phrase\n");
	printf("valeur du pointer env dans ft_change_env_by_copy apres changement : %p\t valeur de *env dans ft_change_env_by_copy apres changement : %s", env, env);
	free(env);
}

char	*ft_change_env_by_copy_with_return(char *env)
{
	printf("valeur du pointer env dans ft_change_env_by_copy_with_return avant changement : %p\t valeur de *env dans ft_change_env_by_copy_with_return avant changement : %s", env, env);
	free(env);
	env = strdup("changement de phrase\n");
	printf("valeur du pointer env dans ft_change_env_by_copy_with_return apres changement : %p\t valeur de *env dans ft_change_env_by_copy_with_return apres changement : %s", env, env);
	return (env);
}

void	ft_change_env_by_ref(char **env)
{
	printf("valeur du pointer env dans ft_change_env_by_copy_with_return avant changement : %p\t valeur de *env dans ft_change_env_by_copy_with_return avant changement : %s", *env, *env);
	free(*env);
	*env = strdup("changement de phrase\n");
	printf("valeur du pointer env dans ft_change_env_by_copy_with_return apres changement : %p\t valeur de *env dans ft_change_env_by_copy_with_return apres changement : %s", *env, *env);
}

int	main( void )
{
	char	*env;

	env = strdup("phrase de base\n");
	printf("valeur du pointer env dans main : %p\t valeur de *env dans main : %s", env, env);

	/* free(env);
	env = strdup("changement de phrase\n");         // <- option 1 dans le main (bon resultat)
	printf("valeur du pointer env dans main apres changement : %p\t valeur de *env dans main apres changement: %s", env, env); */

	//ft_change_env_by_copy(env);					// <- option 2 par copy (mauvais resultat)

	//env = ft_change_env_by_copy_with_return(env);	// <- option 3 par retour (bon resultat)

	//ft_change_env_by_ref(&env);					// <- option 4 par reference(adrdess) (bon resultat)

	printf("valeur du pointer env dans main apres changement : %p\t valeur de *env dans main apres changement: %s", env, env);
	free(env);
}
