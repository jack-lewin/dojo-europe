[@bs.module "react-simple-maps"]
external geographyClass : ReasonReact.reactClass = "Geography";

[@bs.deriving abstract]
type geographyType = {id: string};

[@bs.deriving abstract]
type jsProps = {
  geography: geographyType,
  projection: ComposableMap.projectionConfig,
  precision: option(float),
  cacheId: option(string),
  round: option(bool),
  tabable: option(bool),
};

let make =
    (
      ~geography,
      ~projection,
      ~precision=?,
      ~cacheId=?,
      ~round=?,
      ~tabable=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=geographyClass,
    ~props=
      jsProps(
        ~geography,
        ~projection,
        ~precision,
        ~cacheId,
        ~round,
        ~tabable,
      ),
    children,
  );