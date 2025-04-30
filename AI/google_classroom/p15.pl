maxlist([H], H).

maxlist([H | T], R):-
    maxlist(T, M1),
    H >= M1,
    R is H.

maxlist([H | T], R):-
    maxlist(T, M1),
    H < M1,
    R is M1.