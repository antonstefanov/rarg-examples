switch (Rarg.Cmd.validate(LwtCmds.ExampleLwtCmds.CmdStart.cmd)) {
| Ok () => print_endline("PASS")
| Error(err) =>
  print_endline("FAIL");
  Rarg.Cmd.validateErrToString(err)
  |> String.concat("\n", _)
  |> print_endline(_);
};
