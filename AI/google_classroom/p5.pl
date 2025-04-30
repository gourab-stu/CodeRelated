insert_nth(Item, 1, List, [Item | List]).

insert_nth(Item, Pos, [H | List], [H | Result]):-
    Pos1 is Pos - 1,
    insert_nth(Item, Pos1, List, Result).