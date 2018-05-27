let component = ReasonReact.statelessComponent("App");

/* let mapJsonStr : string = [%bs.raw {|require('./world-50m.json')|}];

   let parseMapJson = json =>
     Json.Decode.{

     };

   Js.log(mapJsonStr); */

let make = _children => {
  ...component,
  render: _self =>
    /* <ComposableMap width=800 height=800 projection="times" style={. height: "auto", width: {js|100%|js} }> */
    <ComposableMap width=800 height=800 projection="times" style=(
      ReactDOMRe.Style.make(~height="auto", ~width="100%", ())
    )>
      <ZoomableGroup>
        <Geographies geography="/world-50m.json">
          (
            (geographies, projection) =>
              geographies
              |> Array.mapi((index, geography) =>
                   <Geography
                     key=(string_of_int(index))
                     geography
                     projection
                   />
                 )
              |> ReasonReact.array
          )
        </Geographies>
      </ZoomableGroup>
    </ComposableMap>,
};