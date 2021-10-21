
/*  Neste caso, temos o principio OCP. Antes das modificações, o código constantemente tinha que ser atualizado se uma nova regra de negócio
    fosse implementada, portanto, comprometeria toda a estrutura das outras dependências para atualizar uma. Desta forma, utilizando o principio
    OCP, deixamos o código aberto para extensões e fechado para modificações, onde podemos adicionar novas regras de negócio sem alterar a classe
    principal.                                                                                                                                      */


interface Saudar {
    public String saudar();
}

public class Formal implements Saudar {
    public String saudar() {
        return "Bom dia, sr.";
    }
}

public class Casual implements Saudar {
    public String saudar() {
        return "E aí, blz?";
    }
}

public class Intimo implements Saudar {
    public String saudar() {
        return "Oi querida!";
    }
}

public class Saudacao {
    String formalidade;

    public void setFormalidade(String formalidade) {
        this.formalidade = formalidade;
    }
    public String saudar(Saudar saudacao) {
        if(this.formalidade == NULL) {
            return "Oi.";
        } else {
            return saudacao.saudar();
        }
    }
}
