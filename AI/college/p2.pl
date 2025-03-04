father(dasharath, ram).
father(dasharath, lakshman).
father(dasharath, bharat).
father(dasharath, shatrughna).

father(ram, luv).
father(ram, kush).

grandfather(X, Y):-
    father(X, M),
    father(M, Y).

grandson(X, Y):-
    father(Y, M),
    father(M, X).

sibling(X, Y):-
    father(M, X),
    father(M, Y),
    X \= Y.

uncle(X, Y):-
    sibling(X, M),
    father(M, Y).