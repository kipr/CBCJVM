package cbc;

public class Touch {
	public Touch(int port) {
		this.port = port;
	}
	public boolean getValue() {
		return (CBC.sensor.digital(port) == 1) ? true : false;
	}
	int port;
}
