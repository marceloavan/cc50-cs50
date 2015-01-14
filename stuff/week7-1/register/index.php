<!DOCTYPE HTML>

<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html;charset=utf-8">
    <title>Quer ser aluno do CC50?</title>
  </head>
  
  <body>
    <div style="text-align: center">
      <h1 style="text-align: center;">Quer ser aluno do CC50?</h1>
      <form action="register2.php" method="post">
        <table style="border: 0; margin-left: auto; margin-right: auto; text-align: left">
          <tr>
            <td>Nome:</td>
            <td><input name="nome" value="oii" type="text"></td>
          </tr>
          <tr>
            <td>Tenho experiência
            <br>em programação:</td>
            <td><input name="experiencia" type="checkbox"></td>
          </tr>
          <tr>
            <td>Sexo:</td>
            <td><input name="sexo" type="radio" value="F"> F  <input name="sexo" type="radio" value="M"> M</td>
          </tr>
          <tr>
            <td>Curso:</td>
            <td>
              <select name="curso" size="1">
                <option value=""></option>
                <option value="Eletro">Eletrotécnica</option>
                <option value="Estradas">Estradas</option>
                <option value="Mecânica">Mecânica</option>
              </select>
            </td>
          </tr>
        </table>
        <br><br>
        <input type="submit" value="Registrar!">  
      </form>
    </div>
  </body>
</html>
