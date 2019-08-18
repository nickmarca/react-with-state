type state = {value: int};
type action =
  | Add(int);

let initialState = {value: 0};

let reducer = (state, action) => {
  switch (action) {
  | Add(value) =>
    let newState = {value: state.value + value};
    newState;
  };
};
