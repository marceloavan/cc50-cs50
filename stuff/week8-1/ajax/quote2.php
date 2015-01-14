<?

    /**
     * quote2.php
     *
     * Devolve preço, máximo e mínimo de uma ação como texto/html lentamente.
     *
     * CC50
     * Gabriel Guimarães
     */


    // finge que o servidor é lento
    sleep(5);

    // faz a pesquisa
    $handle = @fopen("http://download.finance.yahoo.com/d/quotes.csv?s={$_GET["symbol"]}&f=e1l1hg", "r");
    if ($handle !== FALSE)
    {
        $data = fgetcsv($handle);
        if ($data !== FALSE && $data[0] == "N/A")
        {
            print("Price: {$data[1]}");
            print("<br>");
            print("High: {$data[2]}");
            print("<br>");
            print("Low: {$data[3]}");
        }
        fclose($handle);
    }
?>
