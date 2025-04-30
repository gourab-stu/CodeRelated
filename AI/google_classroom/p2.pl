max(X, Y):-
    (
        X = Y -> write('both are equal') ;
        X > Y -> (
            Z is X,
            write(Z),
            write(' is max')
        ) ; (
            Z is Y,
            write(Z),
            write(' is max')
        )
    ).