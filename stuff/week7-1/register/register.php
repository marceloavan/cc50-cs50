<?

    // valida o registro
    if ($_POST["nome"] == "" || $_POST["sexo"] == "" || $_POST["curso"] == "")
    {
        header("Location: http://localhost/class/register/index.php");
        exit;
    }

?>

<!DOCTYPE html>

<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html;charset=utf-8">
    <title>Quer ser aluno do CC50?</title>
  </head>
  <body>
    Você acaba de se registrar <? print($_POST["nome"]); ?> (Brincadeirinha!).
  </body>
</html>
