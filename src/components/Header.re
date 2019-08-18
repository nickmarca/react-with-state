[@react.component]
let make = () => {
  let (stateValue, _) = StateValue.use();
  <header>
    {("Value: " ++ string_of_int(stateValue.value))->React.string}
  </header>;
};
