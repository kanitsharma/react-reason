let component = ReasonReact.statelessComponent("Test");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div className="App">
      <div className="App-header">
        <h2> (ReasonReact.stringToElement("Yo")) </h2>
      </div>
      <p className="App-intro">
        (ReasonReact.stringToElement("To get started, edit"))
        <code> (ReasonReact.stringToElement(" src/app.re ")) </code>
        (ReasonReact.stringToElement("and save to reload."))
      </p>
    </div>
};