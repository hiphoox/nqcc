let program_text = {|
  int main(){return 3;}
  |};

Lexer.lex(program_text) |> Token.toString |> Js.log;