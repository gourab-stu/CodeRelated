app([], L, L).

app([X | M], N, [X | Q]):-
    app(M, N, Q).