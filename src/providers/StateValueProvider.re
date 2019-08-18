[@react.component]
let make = (~children) => {
  <StateContextProvider
    value={React.useReducer(StateReducer.reducer, StateReducer.initialState)}>
    children
  </StateContextProvider>;
};
