[@react.component]
let make = (~prop1, ~prop2=?, ~prop3=1, ()) => {
  let derived = prop3 + 2;
  ReactCompat.useRecordApi({
    ...component,
    render: self => <div> {derived->Js.String.make->ReasonReact.string} </div>,
  });
};
