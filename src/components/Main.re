[@react.component]
let make = () => {
  let (stateValue, dispatch) = StateValue.use();
  let onClick = _ => {
    dispatch(Add(1));
  };
  <main>
    <div>
      <div>
        {("Current value is: " ++ string_of_int(stateValue.value))
         ->React.string}
      </div>
      <button onClick> "Add one more"->React.string </button>
    </div>
  </main>;
};
