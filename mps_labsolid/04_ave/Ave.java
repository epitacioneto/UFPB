/*  Neste caso, temos um problema no principio de ISP (Interface Segregation Principle), onde temos um problema com funções que não fazem nada
    dentro da classe, mas que foram escritas por questões de dependência. Assim, para resolver esse problema, criamos interfaces mais específicas
    para cada classe, extensões da "interface mãe", de forma que esse excesso de funções inutilizadas deixem de existir.                           */

public interface Ave {
    public void trocaPlumagem();
}
