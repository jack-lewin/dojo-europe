[@bs.module "react-simple-maps"]
external geographies : ReasonReact.reactClass = "Geographies";

[@bs.deriving abstract]
type jsProps = {
  componentIdentifier: option(string),
  disableOptimization: option(bool),
  geography: string,
};

let make = (~componentIdentifier=?, ~disableOptimization=?, ~geography, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=geographies,
    ~props=jsProps(~componentIdentifier, ~disableOptimization, ~geography),
    children,
  );
