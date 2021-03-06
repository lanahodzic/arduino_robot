package ast;

import visitor.ASTVisitor;
import visitor.StatementVisitor;

public class PlusEqStatement extends AssignmentStatement {

   public PlusEqStatement(Expression lft, Expression rht) {
      super(lft, rht);
   }

   public <T> T visit(StatementVisitor<T> guest) {
      return guest.visit(this);
   }

   public <T> T visit(ASTVisitor<T> guest) {
      return guest.visit(this);
   }
}
