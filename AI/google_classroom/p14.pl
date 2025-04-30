reverse([], []).

reverse([X | T], REV):-
    reverse(T, R),
    append(R, [X], REV).