[@bs.module "react-simple-maps"]
external composableMap : ReasonReact.reactClass = "ComposableMap";

type projectionConfig = {
    scale: int,
    xOffset: option(int),
    yOffset: option(int),
    rotation: list(int),
    precision: option(float),
};

[@bs.deriving abstract]
type jsProps = {
    width: int,
    height: int,
    projection: option(string),
    projectionConfig: projectionConfig,
    aspectRatio: option(string),
    viewBox: string,
    style: ReactDOMRe.style
};

let make = (
    ~width,
    ~height,
    ~projection=?,
    ~projectionConfig={
        scale: 205,
        rotation: [ -11, 0, 0 ],
        xOffset: None,
        yOffset: None,
        precision: None
    },
    ~aspectRatio=?,
    ~viewBox="0 0 800 800",
    ~style,
    children
) => {
    ReasonReact.wrapJsForReason(
        ~reactClass=composableMap,
        ~props=jsProps(
            ~width,
            ~height,
            ~projection,
            ~projectionConfig,
            ~aspectRatio,
            ~viewBox,
            ~style
        ),
        children
    );
};
