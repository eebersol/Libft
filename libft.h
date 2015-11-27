/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebersol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:40:25 by eebersol          #+#    #+#             */
/*   Updated: 2015/11/27 12:32:17 by eebersol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>

// BASIQUE

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n); // pas encore fait.
void	*ft_memmove(void *dst, const void *src, size_t len); // pas encore fait.
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1); // pas encore fait.
char	*ft_strcpy(char *dst, const char *src, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t n); // pas encore fait.
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n); // pas encore fait.
size_t	ft_strlcat(char *dst, const char *src, size_t size); // pas encore fait.
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c); // pas encore fait.
char	*ft_strstr(const char *s1, const char *s2); // pas encore fait.
char	*ft_strnstr(const char *s1, const char *s2, size_t n); // pas encore fait.
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n); // pas encore fait.
int 	ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

// FONCTION SUPPLEMENTAIRES

void	ft_memdel(void **ap);
void	*ft_memalloc(size_t size);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putnbr(int n);
void	ft_striter(char *s, void (*f) (char *)); // pas encore fait.
void	ft_strdel(char **as); // pas encore fait.
void	ft_strdel(char **as); // pas encore fait.
void	ft_strclr(char *s); // pas encore fait.
void	ft_strclr(char *s); // pas encore fait.
void	ft_striteri(char *s, void (*f) (unsigned int, char *s)); //pas encore fait.
char	*ft_strmap(char const *s, char (*f)(char)); // pas encore fait.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)); // pas encore fait.
int		ft_strequ(char const *s1, char const *s2); // pas encore fait.
int		ft_strnequ(char const *s1, char const *s2, size_t n); // pas encore fait.
char	*ft_strsub(char const *s, unsigned int start, size_t len);// pas encore fait.
char	*ft_strjoin(char const *s1, char const *s2); // pas encore fait.
char	*ft_strtrim(char const *s); // pas encore fait.
char	**ft_strsplit(char const *s, char c); // pas ecnore fait.
char	*ft_itoa(int n); // pas encore fait.
void	ft_putendl(char const *s); // pas encore fait.
void	ft_putchar_fd(char c, int fd); // pas ecnore fait.
void	ft_putstr_fd(char const *s, int fd); // pas ecnore fait.
void	ft_putendl_fd(char const *s, int fd); // pas encore fait.
void	ft_putnbr_fd(int n, int fd); // pas encore fait.

// BONUS

t_list 	*ft_lstnew(void const *content, size_t content_size); // pas encore fait.
t_list	*ft_lstnew(void const *content, size_t content_size); // pas encore fait.
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t)); // pas encore fait.
void	ft_lstadd(t_list **alst, t_list *new); // pas encore fait.
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem)); // pas encore fait.
t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem)); // pas encore fait.
