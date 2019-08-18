// Generated by BUCKLESCRIPT VERSION 5.0.6, PLEASE EDIT WITH CARE
'use strict';

var Curry = require("bs-platform/lib/js/curry.js");
var React = require("react");
var StateValue$ReactHooksTemplate = require("../hooks/StateValue.bs.js");

function Main(Props) {
  var match = StateValue$ReactHooksTemplate.use(/* () */0);
  var dispatch = match[1];
  var onClick = function (param) {
    return Curry._1(dispatch, /* Add */[1]);
  };
  return React.createElement("main", undefined, React.createElement("div", undefined, React.createElement("div", undefined, "Current value is: " + String(match[0][/* value */0])), React.createElement("button", {
                      onClick: onClick
                    }, "Add one more")));
}

var make = Main;

exports.make = make;
/* react Not a pure module */
