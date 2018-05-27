// Generated by BUCKLESCRIPT VERSION 3.1.4, PLEASE EDIT WITH CARE
'use strict';

var $$Array = require("bs-platform/lib/js/array.js");
var ReasonReact = require("reason-react/src/ReasonReact.js");
var Geography$MyProjectName = require("./ReactSimpleMaps/Geography.bs.js");
var Geographies$MyProjectName = require("./ReactSimpleMaps/Geographies.bs.js");
var ComposableMap$MyProjectName = require("./ReactSimpleMaps/ComposableMap.bs.js");
var ZoomableGroup$MyProjectName = require("./ReactSimpleMaps/ZoomableGroup.bs.js");

var component = ReasonReact.statelessComponent("App");

function make() {
  return /* record */[
          /* debugName */component[/* debugName */0],
          /* reactClassInternal */component[/* reactClassInternal */1],
          /* handedOffState */component[/* handedOffState */2],
          /* willReceiveProps */component[/* willReceiveProps */3],
          /* didMount */component[/* didMount */4],
          /* didUpdate */component[/* didUpdate */5],
          /* willUnmount */component[/* willUnmount */6],
          /* willUpdate */component[/* willUpdate */7],
          /* shouldUpdate */component[/* shouldUpdate */8],
          /* render */(function () {
              return ReasonReact.element(/* None */0, /* None */0, ComposableMap$MyProjectName.make(800, 800, /* Some */["times"], /* None */0, /* None */0, /* None */0, {
                              height: "auto",
                              width: "100%"
                            }, /* array */[ReasonReact.element(/* None */0, /* None */0, ZoomableGroup$MyProjectName.make(/* array */[ReasonReact.element(/* None */0, /* None */0, Geographies$MyProjectName.make(/* None */0, /* None */0, "/world-50m.json", /* array */[(function (geographies, projection) {
                                                      return $$Array.mapi((function (index, geography) {
                                                                    return ReasonReact.element(/* Some */[String(index)], /* None */0, Geography$MyProjectName.make(geography, projection, /* None */0, /* None */0, /* None */0, /* None */0, /* array */[]));
                                                                  }), geographies);
                                                    })]))]))]));
            }),
          /* initialState */component[/* initialState */10],
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */component[/* reducer */12],
          /* subscriptions */component[/* subscriptions */13],
          /* jsElementWrapped */component[/* jsElementWrapped */14]
        ];
}

exports.component = component;
exports.make = make;
/* component Not a pure module */