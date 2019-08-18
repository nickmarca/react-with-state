type context = (StateReducer.state, StateReducer.action => unit);
let initialContextValue: context = ({value: 0}, _ => ());

let stateContext = React.createContext(initialContextValue);

let makeProps = (~value, ~children, ()) => {
  "value": value,
  "children": children,
};

let make = React.Context.provider(stateContext);
