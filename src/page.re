open Utils;

requireCSS("./style/index.css");

let component = ReasonReact.statelessComponent("Page");

let make = (~message, _children) => {
  ...component,
  render: (self) =>
    <main className="playground">
      <nav>
      (ReasonReact.stringToElement("THREES"))
      </nav>
      <div className="board">
      </div>
    </main>
};
