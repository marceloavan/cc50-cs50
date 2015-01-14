<!DOCTYPE html>

<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html;charset=utf-8">
    <title>Quer ser aluno do CC50?</title>
  </head>
  <body>
    <? if ($_POST["nome"] == "" || $_POST["sexo"] == "" || $_POST["curso"] == "") { ?>
      Você deve preencher os campos nome, sexo e curso para se registrar!
    <? } else { ?>
      Você acaba de se registrar (Brincadeirinha!).
    <? } ?>
  </body>
</html>
